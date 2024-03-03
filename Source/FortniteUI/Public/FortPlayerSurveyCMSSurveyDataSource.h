#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortPlayerSurveyCMSSurveyKey.h"
#include "FortPlayerSurveyCMSSurveyDataSource.generated.h"

class UCMSContext;
class UEpicCMSManager;
class UFortPlayerSurveyCMSSurveyFactory;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortPlayerSurveyCMSSurveyDataSource : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEpicCMSManager* CMSManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCMSContext* CMSContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FFortPlayerSurveyCMSSurveyKey, UFortPlayerSurveyCMSSurveyFactory*> FactoryMap;
    
public:
    UFortPlayerSurveyCMSSurveyDataSource();
};

