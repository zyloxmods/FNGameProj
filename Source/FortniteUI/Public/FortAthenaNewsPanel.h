#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortAthenaNewsPanel.generated.h"

class UFortAthenaNewsWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaNewsPanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaNewsWidget* NewsWidget_Main;
    
public:
    UFortAthenaNewsPanel();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendMotdInteractionAnalytic(const FString& Interaction) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnExternalURLOpened();
    
};

