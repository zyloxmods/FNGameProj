// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaDanceItemDefinition.h"
#include "AthenaEmojiItemDefinition.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UAthenaEmojiItemDefinition : public UAthenaDanceItemDefinition
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		FGameplayTag EmojiGameplayCueTag;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> PreviewAnimation;                                      // 0x0830(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteGame.AthenaEmojiItemDefinition.PreviewAnimation

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> SpriteSheet;                                      // 0x0858(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteGame.AthenaEmojiItemDefinition.SpriteSheet

	UPROPERTY(EditAnywhere)
		FIntPoint                 SheetDimensions;                                          // 0x0880(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere)
		int                       FrameIndex;                                               // 0x0888(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere)
		int                       FrameCount;                                               // 0x088C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere)
		UMaterialInterface* BaseMaterial;                                             // 0x0890(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere)
		FVector                   IconSize;                                                 // 0x0898(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere)
		FLinearColor              InitialColor;                                             // 0x08A4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere)
		FVector                   InitialLocation;                                          // 0x08B4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere)
		FVector                   InitialVelocity;                                          // 0x08C0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere)
		float                     LifetimeIntroSeconds;                                     // 0x08CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere)
		float                     LifetimeMidSeconds;                                       // 0x08D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere)
		float                     LifetimeOutroSeconds;                                     // 0x08D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere)
		UMaterialInstance* GeneratedMaterial;
};
