#pragma once
#include "CoreMinimal.h"
#include "ESquadSlotType.h"
#include "ESquadSlotSortType.h"
#include "FortItemPickerBase.h"
#include "SquadSlotSortTypes.h"
#include "FortSquadSlotItemPicker.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSquadSlotItemPicker : public UFortItemPickerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortSquadSlotSortChanged, ESquadSlotSortType, CurrentSortType, ESquadSlotType, SquadSlotType);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSquadSlotSortChanged OnSortChanged;
    
    UFortSquadSlotItemPicker();
    UFUNCTION(BlueprintCallable)
    void SetSortTypes(FSquadSlotSortTypes SquadSlotSortTypes);
    
    UFUNCTION(BlueprintCallable)
    void SetIdOfSquadSlotToManageBP(const FName SquadId, const int32 SquadSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIdOfSquadSlotToManageBP(FName OutSquadId, int32& OutSquadSlotIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void CycleSortType();
    
};

