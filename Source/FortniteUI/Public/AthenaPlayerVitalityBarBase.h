#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AthenaPlayerVitalityBarBase.generated.h"

class UAthenaPlayerViewModel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaPlayerVitalityBarBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaPlayerViewModel* PlayerVM;
    
public:
    UAthenaPlayerVitalityBarBase();
    UFUNCTION(BlueprintCallable)
    void SetDataSource(UAthenaPlayerViewModel* PlayerViewModel);
    
};

