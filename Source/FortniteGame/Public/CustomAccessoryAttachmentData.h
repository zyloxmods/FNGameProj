// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomAccessoryAttachmentData.generated.h"


UCLASS()
class FORTNITEGAME_API UCustomAccessoryAttachmentData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	struct FVector                                                        MaleRelativeScale;                                 

	UPROPERTY(EditAnywhere)
	struct FVector                                                        FemaleRelativeScale;                              

	UPROPERTY(EditAnywhere)
	struct FVector                                                        SmallMaleRelativeScale;                            

	UPROPERTY(EditAnywhere)
	struct FVector                                                        SmallFemaleRelativeScale;                        

	UPROPERTY(EditAnywhere)
	struct FVector                                                        LargeMaleRelativeScale;                            

	UPROPERTY(EditAnywhere)
	struct FVector                                                        LargeFemaleRelativeScale;
};
