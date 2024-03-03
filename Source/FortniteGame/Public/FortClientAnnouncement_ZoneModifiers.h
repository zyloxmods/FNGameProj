#pragma once
#include "CoreMinimal.h"
#include "FortClientAnnouncement.h"
#include "FortClientAnnouncementData_ZoneModifiers.h"
#include "FortClientAnnouncement_ZoneModifiers.generated.h"

UCLASS(Blueprintable)
class AFortClientAnnouncement_ZoneModifiers : public AFortClientAnnouncement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortClientAnnouncementData_ZoneModifiers ModifiersData;
    
    AFortClientAnnouncement_ZoneModifiers();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

