// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildPiece_O.h"
#include "Piece.h"
#include <vector>

// Sets default values
ABuildPiece_O::ABuildPiece_O()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuildPiece_O::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuildPiece_O::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

APiece* ABuildPiece_O::getPiece()
{
	return piece;
}

void ABuildPiece_O::spawnBlocks()
{
	const std::vector<std::pair<float, float>> shapes = { {-10.0, 0.0}, {0.0, 0.0}, {0.0, -10.0}, {10.0, -10.0} };
	for (auto&& s : shapes) {
		FVector Location(0.0, 5.0, 195.0);
		FRotator Rotation(0.0, 0.0, 0.0);
		ABlock* b = nullptr;
		switch (FMath::RandRange(1, 6)) {
		case 1:
			b = GetWorld()->SpawnActor<ABlockNormal>(this->GetActorLocation(), Rotation);
			break;
		case 2:
			b = GetWorld()->SpawnActor<ABlockPiedra>(this->GetActorLocation(), Rotation);
			break;
		case 3:
			b = GetWorld()->SpawnActor<ABlockMadera>(this->GetActorLocation(), Rotation);
			break;
		case 4:
			b = GetWorld()->SpawnActor<ABlockMetal>(this->GetActorLocation(), Rotation);
			break;
		case 5:
			b = GetWorld()->SpawnActor<ABlockExplosivo>(this->GetActorLocation(), Rotation);
			break;
		case 6:
			b = GetWorld()->SpawnActor<ABlockHielo>(this->GetActorLocation(), Rotation);
			break;
		}
		Blocks.Add(b);
		b->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
		b->SetActorRelativeLocation(FVector(0.0, s.first, s.second));
		piece = GetWorld()->SpawnActor<APiece>(this->GetActorLocation(), Location, Rotation);
	}
}

