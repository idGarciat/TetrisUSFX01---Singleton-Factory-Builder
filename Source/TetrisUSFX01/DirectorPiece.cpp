// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorPiece.h"

// Sets default values
ADirectorPiece::ADirectorPiece()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorPiece::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorPiece::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

APiece* ADirectorPiece::getPiece()
{
	return builder->getPiece();
}

void ADirectorPiece::setBuilder(AActor* newBuilder)
{
	builder = Cast<IBuilderPiece>(newBuilder);
}

void ADirectorPiece::buildPiece()
{
	builder->spawnBlocks();
}

