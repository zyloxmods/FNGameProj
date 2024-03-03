#pragma once
#include "CoreMinimal.h"
#include "QuickBarData.h"
#include "QuickBarSlot.h"
#include "QuickBar.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FQuickBar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentFocusedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    int32 PreviousFocusedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    int32 SecondaryFocusedSlot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuickBarSlot> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    FQuickBarData DataDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TSet<UFortItemDefinition*> EquippedItemDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> SharedVisibleSlotIndicesWhenUsingGamepad;
    
public:
    FORTNITEGAME_API FQuickBar();
};

