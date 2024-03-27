// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AbilitySystemInterface.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MyProject1PlayerState.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT1_API AMyProject1PlayerState : public APlayerState, public IAbilitySystemInterface

{
	GENERATED_BODY()
	
public:
	AMyProject1PlayerState();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComponent; }

	UPROPERTY(BlueprintReadWrite)
	UAbilitySystemComponent* AbilitySystemComponent;

};
