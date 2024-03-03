#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AthenaMapNavigableIcon.h"
#include "AthenaMapNavigableIconStackOfChallenges.generated.h"

class UCommonActionWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMapNavigableIconStackOfChallenges : public UAthenaMapNavigableIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* CommonActionWidget_Cycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CycleStackInputAction;
    
public:
    UAthenaMapNavigableIconStackOfChallenges();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldCycleAutomatically() const;
    
    UFUNCTION(BlueprintCallable)
    void SelectStackedDataAt(int32 InSelectedStackedDataIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangedStackData(int32 NewStackCount, int32 NonCompletedCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStackedDataCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectStackedDataIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void CycleStackedData();
    
};

