#pragma once
#include "CoreMinimal.h"
#include "FortClientAnnouncementQueue.generated.h"

class AFortClientAnnouncement;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortClientAnnouncementQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortClientAnnouncement*> Announcements;
    
    FFortClientAnnouncementQueue();
};

