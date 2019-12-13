// Fill out your copyright notice in the Description page of Project Settings.


#include "baseCharacter.h"

// Sets default values
AbaseCharacter::AbaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AbaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AbaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AbaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
void AbaseCharacter::CalculateHealth(float Delta) {
	hHealth += Delta;
	CalculateDeath();
}
void AbaseCharacter::CalculateDeath() {
	if (hHealth <= 0)
		bDead = true;
	else
		bDead = false;
}

#if WITH_EDITOR
void AbaseCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) {
	bDead = false;
	hHealth = 100;

	Super::PostEditChangeProperty(PropertyChangedEvent);

	CalculateDeath();
}



#endif

