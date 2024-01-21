#pragma once
#include "CoreMinimal.h"
#include "ActionTextPair.h"
#include "FortClientAnnouncementData_Basic.h"
#include "FortClientAnnouncementData_Keybinding.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortClientAnnouncementData_Keybinding : public FFortClientAnnouncementData_Basic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionTextPair> GamapadActionTextList;
    
    FFortClientAnnouncementData_Keybinding();
};

