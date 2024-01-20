#pragma once
#include "CoreMinimal.h"
#include "RadialOptionData.h"
#include "ItemDefOptionData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FItemDefOptionData : public FRadialOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ItemDef;
    
    FORTNITEUI_API FItemDefOptionData();
};

