#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "GameplayTagVariantDef.h"
#include "FortCosmeticGameplayTagVariant.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortCosmeticGameplayTagVariant : public UFortCosmeticVariantBackedByArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, TitleProperty="VariantName"))
    TArray<FGameplayTagVariantDef> GenericTagOptions;
    
public:
    UFortCosmeticGameplayTagVariant();
};

