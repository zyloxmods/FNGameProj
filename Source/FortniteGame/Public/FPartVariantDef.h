// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FBaseVariantDef.h"
#include "FMaterialVariants.h"
#include "CustomCharacterPart.h"
#include "FMaterialParamterDef.h"
#include "FParticleVariant.h"
#include "FParticleParamterVariant.h"
#include "FCosmeticMetaTagContainer.h"
#include "FScriptedActionVariant.h"
#include "FSocketTransformVariant.h"
#include "FFoleySoundVariant.h"
#include "FManagedParticleParamVariant.h"
#include "FManagedParticleSwapVariant.h"
#include "FPartVariantDef.generated.h"





USTRUCT()
struct FPartVariantDef : public FBaseVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<TSoftObjectPtr<UCustomCharacterPart>> VariantParts;

	UPROPERTY(EditAnywhere)
	TArray<FMaterialVariants> VariantMaterials;                                       

	UPROPERTY(EditAnywhere)
	TArray<FMaterialParamterDef> VariantMaterialParams;                                  
	/*
	UPROPERTY(EditAnywhere)
	TArray<FVariantParticleSystemInitializerData> InitalParticelSystemData;                                
	*/
	UPROPERTY(EditAnywhere)
	TArray<FParticleVariant> VariantParticles;                                     
	
	UPROPERTY(EditAnywhere)
	TArray<FParticleParamterVariant> VariantParticleParams;                                    
	
	UPROPERTY(EditAnywhere)
	TArray<FManagedParticleSwapVariant> VariantSwapInParticles;                                   

	UPROPERTY(EditAnywhere)
	TArray<FManagedParticleParamVariant> VariantAlteredParticleParams;                            
	
	UPROPERTY(EditAnywhere)
	TArray<FFoleySoundVariant> VariantFoley;                                           

	UPROPERTY(EditAnywhere)
	TArray<FSocketTransformVariant> SocketTransforms;                                       
	
	UPROPERTY(EditAnywhere)
	TArray<FScriptedActionVariant> VariantActions;                                         
	
	UPROPERTY(EditAnywhere)
	FCosmeticMetaTagContainer MetaTags;
	
};