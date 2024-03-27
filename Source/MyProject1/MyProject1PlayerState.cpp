// Fill out your copyright notice in the Description page of Project Settings.


#include "MyProject1PlayerState.h"
#include "AbilitiSystemComponent.h"

AMyProject1PlayerState::AMyProject1PlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}