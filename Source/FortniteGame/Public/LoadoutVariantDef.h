#pragma once
#include "CoreMinimal.h"
#include "ELoadoutVariantInsertType.h"
#include "EmoteMontageVariantDef.h"
#include "PartVariantDef.h"
#include "LoadoutVariantDef.generated.h"

class UAthenaCosmeticItemDefinition;

USTRUCT(BlueprintType)
struct FLoadoutVariantDef : public FPartVariantDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAthenaCosmeticItemDefinition> LoadoutItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoadoutVariantInsertType LocationToInsert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bItemExpectedInLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireItemToBeCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreRequireItemToBeCurrentInFrontEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEmoteMontageVariantDef> VariantEmoteMontages;
    
    FORTNITEGAME_API FLoadoutVariantDef();
};

