#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AthenaAwardAlertBase.generated.h"

class UAthenaPlayerViewModel;
class UFortAwardItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaAwardAlertBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaPlayerViewModel* PlayerVM;
    
public:
    UAthenaAwardAlertBase();
    UFUNCTION(BlueprintCallable)
    void SetDataSource(UAthenaPlayerViewModel* PlayerViewModel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAwardGranted(UFortAwardItemDefinition* AwardDefinition);
    
};

