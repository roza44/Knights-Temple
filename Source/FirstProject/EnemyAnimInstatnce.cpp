// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAnimInstatnce.h"
#include "Enemy.h"

void UEnemyAnimInstatnce::NativeInitializeAnimation()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		if (Pawn)
		{
			Enemy = Cast<AEnemy>(Pawn);
		}
	}
}

void UEnemyAnimInstatnce::UpdateAnimationProperties()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		if (Pawn)
		{
			Enemy = Cast<AEnemy>(Pawn);
		}
	}

	if (Pawn)
	{
		FVector Speed = Pawn->GetVelocity();
		FVector LateralSpeed = FVector(Speed.X, Speed.Y, 0.f);
		MovementSpeed = LateralSpeed.Size();
	}
}

void UEnemyAnimInstatnce::Indicate()
{
	UE_LOG(LogTemp, Warning, TEXT("Overrr"));
}