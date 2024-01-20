#pragma once
#include "CoreMinimal.h"
#include "SurvivalObjectiveText.generated.h"

USTRUCT(BlueprintType)
struct FSurvivalObjectiveText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SafezoneStateText;
    
    FORTNITEUI_API FSurvivalObjectiveText();
};

