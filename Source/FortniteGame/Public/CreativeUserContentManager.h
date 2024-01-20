#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CreativeThumbnailCacheData.h"
#include "CreativeUserContentManager.generated.h"

class UCreativeThumbnailGenerator;
class ULevelSaveRecord;

UCLASS(Blueprintable, ClassGroup=Custom, Within=FortPlayerControllerAthena, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UCreativeUserContentManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ULevelSaveRecord*> LevelSaveRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCreativeThumbnailCacheData> SaveThumbnails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreativeThumbnailGenerator* CreativeThumbnailGenerator;
    
public:
    UCreativeUserContentManager();
};

