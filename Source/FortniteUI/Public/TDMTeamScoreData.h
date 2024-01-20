#pragma once
#include "CoreMinimal.h"
#include "TDMTeamScoreData.generated.h"

USTRUCT(BlueprintType)
struct FTDMTeamScoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrScoreText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrScorePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrScore;
    
    FORTNITEUI_API FTDMTeamScoreData();
};

