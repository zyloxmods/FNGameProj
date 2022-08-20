


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VectorParamVariant.h"
#include "MaterialVectorVariant.h"
#include "MaterialFloatVariant.h"
#include "VariantParticleSystemData.generated.h"


USTRUCT()
struct FVariantParticleSystemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName  ParticleComponentName;            
	/*
	UPROPERTY(EditAnywhere)
		unsigned char UnknownData00[0x8];

	UPROPERTY(EditAnywhere)
		unsigned char UnknownData00[0x8];
		*/
		
	UPROPERTY(EditAnywhere)
		EAttachmentRule LocationRule;                                            

	UPROPERTY(EditAnywhere)
		EAttachmentRule RotationRule;                                     

	UPROPERTY(EditAnywhere)
		bool bWeldSimulatedBodies;  
	/*
    UPROPERTY(EditAnywhere)
	  unsigned char UnknownData00[0x8];
	*/

};