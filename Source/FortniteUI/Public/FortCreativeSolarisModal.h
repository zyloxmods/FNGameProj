#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortCreativeSolarisModal.generated.h"

class USolUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeSolarisModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USolUserWidget* SolarisWidget;
    
public:
    UFortCreativeSolarisModal();
protected:
    UFUNCTION(BlueprintCallable)
    void Save();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseModal();
    
};

