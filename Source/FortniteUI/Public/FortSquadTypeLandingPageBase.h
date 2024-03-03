#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFortFrontendInventoryFilter.h"
#include "EFortHomebaseSquadType.h"
#include "FortActivatablePanel.h"
#include "FortSquadTypeLandingPageBase.generated.h"

class UFortSquadSelectorButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSquadTypeLandingPageBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadOnlyModeWIFE;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortHomebaseSquadType SquadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackInputActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortFrontendInventoryFilter ItemManagementScreenFilter;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UFortSquadSelectorButton>> SquadSelectorButtons;
    
public:
    UFortSquadTypeLandingPageBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowWarningReadOnlyWIFE(bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenWIFE() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePendingNavigationOp();
    
    UFUNCTION(BlueprintCallable)
    void HandleBackInputAction(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UFortSquadSelectorButton* CreateAndAddSquadButton(const FName SquadId);
    
};

