#pragma once
#include "CoreMinimal.h"
#include "EpicCMSScreenBase.h"
#include "FortHomeCMSScreenBase.generated.h"

class UWidgetSwitcher;
class UEpicCMSScreenBase;

UCLASS(Blueprintable, EditInlineNew)
class UFortHomeCMSScreenBase : public UEpicCMSScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* LayoutSwitcher;
    
public:
    UFortHomeCMSScreenBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTilesLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreTilesLoaded() const;
    
};

