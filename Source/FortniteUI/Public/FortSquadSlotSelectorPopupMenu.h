#pragma once
#include "CoreMinimal.h"
#include "FortPopupMenu.h"
#include "FortSquadSlotSelectorPopupMenu.generated.h"

class UFortSquadSlotSelectorButton;

UCLASS(Blueprintable, EditInlineNew)
class UFortSquadSlotSelectorPopupMenu : public UFortPopupMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadOnlyModeWIFE;
    
    UFortSquadSlotSelectorPopupMenu();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenWIFE() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortSquadSlotSelectorButton* GetHostButton() const;
    
};

