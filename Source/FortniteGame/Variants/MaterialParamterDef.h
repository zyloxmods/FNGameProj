

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MaterialVariants.h"
#include "BaseVariantDef.h"
#include "MaterialVectorVariant.h"
#include "MaterialTextureVariant.h"
#include "MaterialFloatVariant.h"
#include "MaterialParamterDef.generated.h"


USTRUCT()
struct FMaterialParamterDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UMaterialInterface> MaterialToAlter; 

	UPROPERTY(EditAnywhere)
	FName CascadeMaterialName;  

	UPROPERTY(EditAnywhere)
	TArray<FMaterialVectorVariant> ColorParams;       

	UPROPERTY(EditAnywhere)
	TArray<FMaterialTextureVariant> TextureParams;    

	UPROPERTY(EditAnywhere)
	TArray<FMaterialFloatVariant> FloatParams;    
	/*
	UPROPERTY(EditAnywhere)
	char                                                                  UnknownData_60[0x8];                               
	*/
};
