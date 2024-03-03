#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortLandingPageDefenderSummaryInfo.h"
#include "FortSquadLandingPageDefenderSquadDetails.generated.h"

class UCommonNumericTextBlock;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSquadLandingPageDefenderSquadDetails : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* OutpostName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* PowerRating;
    
    UFortSquadLandingPageDefenderSquadDetails();
    UFUNCTION(BlueprintCallable)
    void SetDefenderSquadInfo(const FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDefenderSquadInfoSetBP(const FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleAddDefenderSquadMemberBP(const FName SquadId, int32 Index);
    
};

