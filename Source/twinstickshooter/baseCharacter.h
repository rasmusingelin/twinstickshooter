// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "baseCharacter.generated.h"

UCLASS(Blueprintable)
class TWINSTICKSHOOTER_API AbaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AbaseCharacter();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BaseCharacter")
	float hHealth = 100.0f;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "BaseCharacter")
	bool bDead = false;

	virtual void CalculateDeath();

	UFUNCTION(BlueprintCallable, Category = "BaseCharacter")
		virtual void CalculateHealth(float delta);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
	override;
#endif

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
