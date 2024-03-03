#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortDivisionDetailsScreen.generated.h"

class UCommonTextBlock;
class UCommonWidgetSwitcher;
class UFortDivisionDetailsInfo;
class UFortDivisionPayoutInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDivisionDetailsScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDivisionDetailsInfo* DetailsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDivisionPayoutInfo* PayoutInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* WidgetSwitcher_MainContent;
    
public:
    UFortDivisionDetailsScreen();
    UFUNCTION(BlueprintCallable)
    void SetTournamentAndEventId(const FString& InTournamentId, const FString& InEventId);
    
    UFUNCTION(BlueprintCallable)
    void HandleRightDivisionClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleLeftDivisionClicked();
    
};

