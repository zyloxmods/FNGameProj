#pragma once
#include "CoreMinimal.h"
#include "FortChallengeData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FFortChallengeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> Icon;
    
    FORTNITECONVERSATIONUI_API FFortChallengeData();
};

