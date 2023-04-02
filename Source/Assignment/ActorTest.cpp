// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorTest.h"

// Sets default values
AActorTest::AActorTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActorTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const FQuat Rotation = FQuat::MakeFromEuler(FVector(0, 0, m_fRotation));

	AddActorLocalRotation(Rotation);

}

void AActorTest::SetRotation(float NewRotation) 
{
	m_fRotation = NewRotation;
}

