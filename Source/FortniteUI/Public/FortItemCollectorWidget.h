#pragma once
#include "CoreMinimal.h"
#include "EFortItemCollectorState.h"
#include "FortUserWidget.h"
#include "FortItemCollectorWidget.generated.h"

class ABuildingItemCollectorActor;
class UFortWorldItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UFortItemCollectorWidget : public UFortUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingItemCollectorActor* ItemCollector;
    
public:
    UFortItemCollectorWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnItemCollectorValuesChanged(UFortWorldItemDefinition* InputItem, int32 Goal, int32 deposit, int32 Captures);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnItemCollectorStateChanged(EFortItemCollectorState ItemCollectorState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnItemCollectorChanged(ABuildingItemCollectorActor* OutItemCollector);
    
};

