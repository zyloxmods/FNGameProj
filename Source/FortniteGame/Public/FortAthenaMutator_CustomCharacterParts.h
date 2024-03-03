#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator.h"
#include "PartOverrideData.h"
#include "FortAthenaMutator_CustomCharacterParts.generated.h"

UCLASS(Abstract, Blueprintable, HideDropdown)
class AFortAthenaMutator_CustomCharacterParts : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartOverrideData> PartOverrideCustomizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldSwapSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SkinMetaTagsToSkip;
    
public:
    AFortAthenaMutator_CustomCharacterParts();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetPartOverridesForPlayer(TArray<FPartOverrideData>& OutOverrideParts, uint8 PayloadData) const;
    
};

