#pragma once
#include "CoreMinimal.h"
#include "RadialOptionData.h"
#include "EmoteOptionData.generated.h"

USTRUCT(BlueprintType)
struct FEmoteOptionData : public FRadialOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmoteCommand;
    
    FORTNITEUI_API FEmoteOptionData();
};

