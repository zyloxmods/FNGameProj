#pragma once
#include "CoreMinimal.h"
#include "FortActorIndicatorWidget.h"
#include "Templates/SubclassOf.h"
#include "FortInteractionIndicatorWidget.generated.h"

class UCommonVisibilitySwitcher;
class UFortInteractContextInfo;
class UFortInteractContextInfoWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortInteractionIndicatorWidget : public UFortActorIndicatorWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* Switcher_PrimaryContext;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UFortInteractContextInfoWidget>, UFortInteractContextInfoWidget*> PrimaryContextOverrideMap;
    
public:
    UFortInteractionIndicatorWidget();
private:
    UFUNCTION(BlueprintCallable)
    void HandleRemoveContextOverride(TSubclassOf<UFortInteractContextInfoWidget> ContextOverrideWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleAddContextOverride(TSubclassOf<UFortInteractContextInfoWidget> ContextOverrideWidget);
    
    UFUNCTION(BlueprintCallable)
    UFortInteractContextInfoWidget* ActivateContextOverride(const TSubclassOf<UFortInteractContextInfoWidget>& ContextOverrideWidget, const UFortInteractContextInfo* ContextInfo);
    
};

