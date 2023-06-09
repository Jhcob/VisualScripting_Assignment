// Fill out your copyright notice in the Description page of Project Settings.


#include "OAttributeComponent.h"

// Sets default values for this component's properties
UOAttributeComponent::UOAttributeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.

	// ...

	Health = 100;
}


bool UOAttributeComponent::ApplyHealthChange(float Delta)
{
	Health += Delta;

	return true;
}