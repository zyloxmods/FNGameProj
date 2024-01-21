#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "OnSupportCreatorOLDDelegate.h"
#include "FortCreativeIslandPanel.generated.h"

class APlayerController;
class UInputComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeIslandPanel : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSupportCreatorOLD OnSupportCreator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* PanelInputComponent;
    
public:
    UFortCreativeIslandPanel();
    UFUNCTION(BlueprintCallable)
    void PushPanelInputComponent(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PopPanelInputComponent(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSupportCode() const;
    
};

