#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "AthenaProfileStatListWidgetBase.generated.h"

class UAthenaBaseStatView;
class UAthenaProfileStatBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaProfileStatListWidgetBase : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaProfileStatBox* ProfileStatBox;
    
public:
    UAthenaProfileStatListWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleStatViewChanged(UAthenaBaseStatView* StatView);
    
    
    // Fix for true pure virtual functions not being implemented
};

