#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortLandingPageDefenderSummaryInfo.h"
#include "FortSquadLandingPageDefenderSquadDetailsLocked.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSquadLandingPageDefenderSquadDetailsLocked : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* OutpostName;
    
    UFortSquadLandingPageDefenderSquadDetailsLocked();
    UFUNCTION(BlueprintCallable)
    void SetDefenderSquadInfo(const FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
    
};

