#pragma once
#include "CoreMinimal.h"
#include "ActionTextPair.h"
#include "FortClientAnnouncementData_Basic.h"
#include "FortClientAnnouncementData_Keybinding.generated.h"

USTRUCT(BlueprintType)
struct FFortClientAnnouncementData_Keybinding : public FFortClientAnnouncementData_Basic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionTextPair> GamapadActionTextList;
    
    FORTNITEGAME_API FFortClientAnnouncementData_Keybinding();
};

