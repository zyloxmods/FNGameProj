// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "AthenaItemWrapDefinition.generated.h"

/**
 * 
 */


UCLASS()
class FORTNITEGAME_API UAthenaItemWrapDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:


	UPROPERTY(EditAnywhere)
		FSoftClassPath                           ItemWrapModifierBlueprint;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInstance>        ItemWrapMaterial;



};

UCLASS(BlueprintType)
class UFortWrapVariantPreviewGenerator : public UFortVariantPreviewGenerator
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		FGameplayTag                                WrapVariantChannelTag;                                    // 0x0028(0x0004) (Edit)

	UPROPERTY(EditAnywhere)
		FFortCosmeticVariantPreview                 BaseVariantPreview;                                       // 0x0030(0x0040) (Edit)

	UPROPERTY(EditAnywhere)
		int32                                                NumWrapPreviews;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

		UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UAthenaItemWrapDefinition>> PreviewWrapDefinitions;                                      // 0x0074(0x0010) UNKNOWN PROPERTY: ArrayProperty FortniteGame.FortWrapVariantPreviewGenerator.PreviewWrapDefinitions

	UPROPERTY(EditAnywhere)
		FString                                     DefaultCustomData;                                        // 0x0088(0x0010) (Edit, ZeroConstructor)

};
