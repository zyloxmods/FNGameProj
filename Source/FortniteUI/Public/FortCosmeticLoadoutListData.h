#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFortLoadoutCardType.h"
#include "FortCosmeticLoadoutListData.generated.h"

class UFortCosmeticLockerItem;

UCLASS(Blueprintable)
class UFortCosmeticLoadoutListData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCosmeticLockerItem* Loadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortLoadoutCardType CardType;
    
    UFortCosmeticLoadoutListData();
};

