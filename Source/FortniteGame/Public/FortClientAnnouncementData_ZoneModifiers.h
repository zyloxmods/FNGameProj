#pragma once
#include "CoreMinimal.h"
#include "FortClientAnnouncementData.h"
#include "FortClientAnnouncementData_ZoneModifiers.generated.h"

class UFortGameplayModifierItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortClientAnnouncementData_ZoneModifiers : public FFortClientAnnouncementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortGameplayModifierItemDefinition*> Modifiers;
    
    FFortClientAnnouncementData_ZoneModifiers();
};

