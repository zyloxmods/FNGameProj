#pragma once
#include "CoreMinimal.h"
#include "LiveLinkTypes.h"
#include "EFortFacialAnimTypes.h"
#include "FortAnimInput_Facial.generated.h"

USTRUCT(BlueprintType)
struct FFortAnimInput_Facial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLiveLinkSubjectName SubjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortFacialAnimTypes CurrentAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurvesOnly;
    
    FORTNITEGAME_API FFortAnimInput_Facial();
};

