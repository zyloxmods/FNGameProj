#pragma once
#include "CoreMinimal.h"
#include "RadialOptionData.h"
#include "ChatOptionData.generated.h"

USTRUCT(BlueprintType)
struct FChatOptionData : public FRadialOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChatText;
    
    FORTNITEUI_API FChatOptionData();
};

