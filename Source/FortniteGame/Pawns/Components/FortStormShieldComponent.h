// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FortStormShieldComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FORTNITEGAME_API UFortStormShieldComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFortStormShieldComponent();

	//UPROPERTY(EditAnywhere)
		//FMulticastInlineDelegate OnStormShieldStatusChanged;

	UPROPERTY(EditAnywhere)
		bool bCareAboutEdgeOfStorm;

	UPROPERTY(EditAnywhere)
		bool bDisabled;

	UPROPERTY(EditAnywhere)
		float DistanceFromEdgeOfStormShield;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
