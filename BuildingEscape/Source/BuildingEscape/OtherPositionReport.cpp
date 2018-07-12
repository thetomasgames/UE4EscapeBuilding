// Fill out your copyright notice in the Description page of Project Settings.

#include "OtherPositionReport.h"


// Sets default values for this component's properties
UOtherPositionReport::UOtherPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOtherPositionReport::BeginPlay()
{
	Super::BeginPlay();


	FString name = GetOwner()->GetName();
	//FString name = FString();
	UE_LOG(LogTemp, Warning, TEXT("Position report here on %s"), *name);
	// ...
	
}


// Called every frame
void UOtherPositionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

