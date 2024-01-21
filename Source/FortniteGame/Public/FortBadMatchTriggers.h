#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortBadMatchTrigger.h"
#include "FortBadMatchTriggers.generated.h"

UCLASS(Blueprintable, Config=Game)
class UFortBadMatchTriggers : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortBadMatchTrigger> Triggers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PhasesToInclude;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double ReportProbability;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCsvProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUploadAllCsvs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowForcedPerformanceReport;
    
    UFortBadMatchTriggers();
};

