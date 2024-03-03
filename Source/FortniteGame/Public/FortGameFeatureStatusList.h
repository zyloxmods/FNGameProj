#pragma once
#include "CoreMinimal.h"
#include "CombinedFeatureProgressSummary.h"
#include "FortGameFeatureOptionalInstallStatus.h"
#include "FortGameFeatureStatus.h"
#include "FortGameFeatureStatusList.generated.h"

USTRUCT(BlueprintType)
struct FFortGameFeatureStatusList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombinedFeatureProgressSummary ProgressSummary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameFeatureStatus> Features;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameFeatureOptionalInstallStatus> FeatureOptionalInstalls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasNetworkConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsingCellularConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoLaunchFullGame;
    
    FORTNITEGAME_API FFortGameFeatureStatusList();
};

